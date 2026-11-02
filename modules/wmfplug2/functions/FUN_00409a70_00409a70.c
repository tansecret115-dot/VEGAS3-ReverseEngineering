/* Module: wmfplug2.dll
   Function: FUN_00409a70
   Address: 00409a70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00409a70(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int unaff_ESI;
  int iVar4;
  
  piVar2 = param_1;
  if (param_1[0x11] != 0) {
    timeKillEvent(param_1[0x11]);
    piVar2[0x11] = 0;
  }
  piVar1 = (int *)piVar2[0x13];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x2c))(piVar1);
    (**(code **)(*(int *)piVar2[0x13] + 0x10))((int *)piVar2[0x13]);
  }
  if (piVar2[0x17] != 0) {
    (**(code **)(*piVar2 + 0x34))(piVar2,&param_1);
    iVar3 = 0;
    if (0 < unaff_ESI) {
      iVar4 = 0;
      do {
        piVar1 = *(int **)(iVar4 + 0x18 + piVar2[0x17]);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0x14))(piVar1);
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0x20;
      } while (iVar3 < unaff_ESI);
    }
  }
  if (piVar2[2] != 0) {
    piVar2[2] = 0;
  }
  return 0;
}


