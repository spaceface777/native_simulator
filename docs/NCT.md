## Native simulator single CPU threading emulation (NCT)

Check the description in:
[../common/src/nct.c](../common/src/nct.c)

![NCT example](nct_example.drawio.svg)

When the runner is built with `NSI_CPU_BACKEND=coroutines` the embedded threads are
coroutines instead of host threads, see [NCE.md](NCE.md#coroutine-implementation) and
[../common/coro/nsi_cpu_coro.c](../common/coro/nsi_cpu_coro.c)
