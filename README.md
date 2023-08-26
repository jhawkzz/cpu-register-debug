# cpu-register-debug
Cool debugging trick I figured out when you're in really desperate times.

I've often found myself in situations where a program is crashing or deadlocking and I can't figure out why.
Due to the nature, I also don't always have the luxary of console printouts or screen rendering.

I wanted to test a theory that if I needed to isolate an area of code to see how far program execution got, I could
write specific values to CPU registers and immediately abort after, and then look at the crash dump.

It worked!
