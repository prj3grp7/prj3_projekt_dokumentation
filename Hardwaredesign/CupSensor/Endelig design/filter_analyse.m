fmod = 10E6;
fs = 2500;
N = fmod;

N_fs = round(N*fs/fmod);

sinc_filter = [ones(1,N_fs) zeros(1,N-N_fs)];
plot(sinc_filter);
figure;
%sinc_4_filter = conv(sinc)

[h, f] = freqz(sinc_filter, 1, N, fmod);
plot(f,abs(h));

%%
n = 1:N;
fc = 2500/fmod;
h = 2*fc*sinc(2*fc*n);
plot(h);

%%
figure;

fs=2500;
N=1024*16;
sinc_filter = [1 zeros(1,N-1)];
[h, f] = freqz(sinc_filter, 1, N, fs);
plot(f,abs(h));

%%
% H(z)=(1/K)*(1-z^K