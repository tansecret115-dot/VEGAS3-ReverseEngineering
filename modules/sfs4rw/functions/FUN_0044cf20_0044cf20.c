/* Module: sfs4rw.dll
   Function: FUN_0044cf20
   Address: 0044cf20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044cf20(int *param_1)

{
  uint uVar1;
  char *pcVar2;
  
  if ((uint)param_1[0x37] < (uint)param_1[0x32]) {
    while( true ) {
      uVar1 = FUN_0044e4f0(param_1 + 0x1b,2);
      if (uVar1 != 0) {
        pcVar2 = (char *)param_1[0x21];
        if (pcVar2 == (char *)0x0) {
          pcVar2 = "zlib error";
        }
        FUN_00475ad0(param_1,pcVar2);
      }
      if (param_1[0x1f] != 0) break;
      FUN_00478d00(param_1,(byte *)param_1[0x29],param_1[0x2a]);
      param_1[0x1e] = param_1[0x29];
      param_1[0x1f] = param_1[0x2a];
    }
    if (param_1[0x2a] != param_1[0x1f]) {
      FUN_00478d00(param_1,(byte *)param_1[0x29],param_1[0x2a] - param_1[0x1f]);
      param_1[0x1e] = param_1[0x29];
      param_1[0x1f] = param_1[0x2a];
    }
    *(undefined4 *)((int)param_1 + 0x146) = 0;
    FUN_0047af00((int)param_1);
  }
  return;
}


