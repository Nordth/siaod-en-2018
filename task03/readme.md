# Templates

1) User enters some signal (10 values from 0 to 9): 
> 0423905944

2) Print inverted signal: 
inv[c] = 9 - signal[c]

9576094055

3) Ask usr cutting range (R1, R2)
cut[c] = inv[c] >= R1 && inv[c] <= R2 ? 0 : inv[c];

> R1 = 5
> R2 = 7
9000094000

4) Ask user for a number and increase each element of signal on it. But element of signal should not become greater than 9

> I = 2
9222296222