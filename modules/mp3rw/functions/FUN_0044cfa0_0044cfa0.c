/* Module: mp3rw.dll
   Function: FUN_0044cfa0
   Address: 0044cfa0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044cfa0(int *param_1)

{
  uint uVar1;
  char *pcVar2;
  
  if ((uint)param_1[0x37] < (uint)param_1[0x32]) {
    while( true ) {
      uVar1 = FUN_0044e570(param_1 + 0x1b,2);
      if (uVar1 != 0) {
        pcVar2 = (char *)param_1[0x21];
        if (pcVar2 == (char *)0x0) {
          pcVar2 = "zlib error";
        }
        FUN_00475b50(param_1,pcVar2);
      }
      if (param_1[0x1f] != 0) break;
      FUN_00478d80(param_1,(byte *)param_1[0x29],param_1[0x2a]);
      param_1[0x1e] = param_1[0x29];
      param_1[0x1f] = param_1[0x2a];
    }
    if (param_1[0x2a] != param_1[0x1f]) {
      FUN_00478d80(param_1,(byte *)param_1[0x29],param_1[0x2a] - param_1[0x1f]);
      param_1[0x1e] = param_1[0x29];
      param_1[0x1f] = param_1[0x2a];
    }
    *(undefined4 *)((int)param_1 + 0x146) = 0;
    FUN_0047af80((int)param_1);
  }
  return;
}


