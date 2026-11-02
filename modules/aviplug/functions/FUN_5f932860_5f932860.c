/* Module: aviplug.dll
   Function: FUN_5f932860
   Address: 5f932860
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f932860(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *unaff_retaddr;
  
  piVar2 = param_1;
  if (param_1[0x8a] != 0) {
    iVar3 = 0;
    if (0 < param_1[0x90]) {
      iVar4 = 0;
      do {
        puVar1 = *(undefined4 **)(iVar4 + 0x28 + piVar2[0x91]);
        if (puVar1 != (undefined4 *)0x0) {
          param_1 = (int *)0x0;
          (**(code **)*puVar1)(puVar1,&DAT_5f9d9c80,&param_1);
          if (param_1 != (int *)0x0) {
            (**(code **)(*param_1 + 0x28))(param_1);
            (**(code **)(*unaff_retaddr + 8))(unaff_retaddr);
          }
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0x38;
      } while (iVar3 < piVar2[0x90]);
    }
    if (piVar2[0x92] != 0) {
      FUN_5f934160(piVar2[0x92]);
    }
    if ((HANDLE)piVar2[0x96] != (HANDLE)0xffffffff) {
      CloseHandle((HANDLE)piVar2[0x96]);
      piVar2[0x96] = -1;
    }
    piVar2[0x8a] = 0;
    piVar2[0x93] = 1;
  }
  return 0;
}


