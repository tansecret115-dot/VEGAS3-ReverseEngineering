/* Module: vidcap30.exe
   Function: FUN_0057fbb0
   Address: 0057fbb0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0057fbb0(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iStack_2c;
  int *piStack_28;
  int *piStack_24;
  int iStack_20;
  
  if (param_1 == (int *)0x0) {
    piStack_24 = (int *)0x0;
  }
  else {
    piStack_24 = param_1 + 3;
  }
  piStack_28 = (int *)param_1[6];
  iStack_20 = param_2;
  iStack_2c = 0x57fbd4;
  iVar2 = (**(code **)(*piStack_28 + 0x10))();
  if (-1 < iVar2) {
    iStack_2c = param_2;
    iVar2 = (**(code **)(*param_1 + 0x24))();
    if (-1 < iVar2) {
      piVar1 = (int *)param_1[0x27];
      if (piVar1 != (int *)0x0) {
        iStack_20 = 0;
        (**(code **)(*piVar1 + 0x14))(piVar1,&iStack_20);
        if (iStack_20 == 0) {
          iStack_20 = 1;
        }
        iVar2 = (**(code **)(*(int *)param_1[0x26] + 0x18))((int *)param_1[0x26]);
        if (iVar2 < 0) {
          return iVar2;
        }
        iVar2 = (**(code **)(*param_1 + 0x3c))(param_1[0x26],&iStack_2c);
        if (iVar2 < 0) {
          return iVar2;
        }
        iVar2 = (**(code **)(*(int *)param_1[0x26] + 0x14))((int *)param_1[0x26]);
        if (iVar2 < 0) {
          return iVar2;
        }
        iVar2 = (**(code **)(*(int *)param_1[0x27] + 0x10))
                          ((int *)param_1[0x27],param_1[0x26],param_1[0x36]);
        if (iVar2 < 0) {
          return iVar2;
        }
      }
      iVar2 = 0;
    }
  }
  return iVar2;
}


