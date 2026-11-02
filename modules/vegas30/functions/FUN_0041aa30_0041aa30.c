/* Module: vegas30.exe
   Function: FUN_0041aa30
   Address: 0041aa30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041aa30(int *param_1,int param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int *unaff_EDI;
  
  puVar1 = param_3;
  *param_3 = 0;
  if (-1 < param_2) {
    switch(param_1[0x23]) {
    case 2:
      param_3 = (int *)0x0;
      piVar3 = (int *)FUN_005d0cc0(param_1[0x25],param_2);
      if (piVar3 != (int *)0x0) {
        _SfAudio_CreateFilterWrapper_4(&param_3);
        if (param_3 != (int *)0x0) {
          (**(code **)(*param_3 + 0xc))(param_3,piVar3);
          param_1[0x71] = (int)piVar3;
          *puVar1 = param_1;
          return;
        }
        (**(code **)(*piVar3 + 8))(piVar3);
      }
      *puVar1 = param_3;
      return;
    case 3:
    case 4:
      param_3 = (int *)0x0;
      iVar2 = (**(code **)(*(int *)param_1[0x24] + 0xb8))((int *)param_1[0x24],&param_3);
      if (-1 < iVar2) {
        if (param_2 != 0) {
          (**(code **)(*param_1 + 0x10))(param_1,param_2);
        }
        (**(code **)(*param_1 + 0xc))(param_1,1,puVar1,0);
        (**(code **)(*unaff_EDI + 8))(unaff_EDI);
      }
      break;
    case 5:
      param_3 = (int *)0x0;
      iVar2 = (**(code **)(*(int *)param_1[0x24] + 0xb8))((int *)param_1[0x24],&param_3);
      if (-1 < iVar2) {
        if (param_2 != 0) {
          (**(code **)(*param_1 + 0x10))(param_1,param_2);
        }
        (**(code **)(*param_1 + 0xc))(param_1,1,puVar1,0);
        (**(code **)(*unaff_EDI + 8))(unaff_EDI);
        return;
      }
    }
  }
  return;
}


