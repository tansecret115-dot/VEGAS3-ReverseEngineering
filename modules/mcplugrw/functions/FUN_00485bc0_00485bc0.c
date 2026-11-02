/* Module: mcplugrw.dll
   Function: FUN_00485bc0
   Address: 00485bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00485bc0(int *param_1,uint param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  piVar1 = param_1;
  iVar2 = param_1[3];
  if (param_3 == 0) {
    *(undefined4 *)(*(int *)param_1[8] + 0x14) = 0x27;
    (*(code *)**(undefined4 **)param_1[8])((undefined4 *)param_1[8]);
  }
  iVar2 = iVar2 + param_3;
  uVar3 = ((1 << ((byte)param_3 & 0x1f)) - 1U & param_2) << (0x18U - (char)iVar2 & 0x1f) |
          param_1[2];
  while( true ) {
    if (iVar2 < 8) {
      piVar1[2] = uVar3;
      piVar1[3] = iVar2;
      return CONCAT31((int3)(param_2 >> 8),1);
    }
    param_1._2_1_ = (char)(uVar3 >> 0x10);
    *(char *)*piVar1 = param_1._2_1_;
    param_2 = piVar1[1] - 1;
    *piVar1 = *piVar1 + 1;
    piVar1[1] = param_2;
    if ((param_2 == 0) && (param_2 = FUN_00485c80(piVar1), (char)param_2 == '\0')) break;
    if (param_1._2_1_ == -1) {
      *(undefined1 *)*piVar1 = 0;
      param_2 = piVar1[1] - 1;
      *piVar1 = *piVar1 + 1;
      piVar1[1] = param_2;
      if ((param_2 == 0) && (param_2 = FUN_00485c80(piVar1), (char)param_2 == '\0')) break;
    }
    iVar2 = iVar2 + -8;
    uVar3 = uVar3 << 8;
  }
  return param_2 & 0xffffff00;
}


