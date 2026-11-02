/* Module: rmme3260.dll
   Function: FUN_662087c0
   Address: 662087c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662087c0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = -0x7fffbffb;
  piVar4 = (int *)param_1[0x17];
  iVar2 = param_1[0xf];
  if (piVar4 == (int *)0x0) {
    return -0x7ffbfff9;
  }
  piVar1 = param_1 + 0x18;
  if (param_1[0x18] == 0) {
    iVar3 = (**(code **)(*piVar4 + 0xc))(piVar4,&DAT_6626a628,piVar1);
  }
  piVar4 = (int *)*piVar1;
  if (piVar4 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar4 + 0xc))(piVar4,s_StreamCount_6626f09c,iVar2);
    if (-1 < iVar3) {
      iVar3 = (**(code **)(*(int *)*piVar1 + 0xc))((int *)*piVar1,s_IsRealDataType_6626f56c,1);
      if (-1 < iVar3) {
        iVar3 = (**(code **)(*param_1 + 0x50))(param_1);
        if (-1 < iVar3) {
          piVar4 = (int *)FUN_66249ad0(param_1 + 0x16);
          iVar3 = (**(code **)(*piVar4 + 0x10))(piVar4,*piVar1);
        }
      }
    }
  }
  return iVar3;
}


