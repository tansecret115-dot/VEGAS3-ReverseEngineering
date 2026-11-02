/* Module: vidpcore.dll
   Function: FUN_5de886d0
   Address: 5de886d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5de886d0(int *param_1,undefined4 param_2,undefined4 param_3,HWND param_4)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  
  iVar2 = FUN_5deb35b0(param_2,param_3,param_4,1,100);
  iVar3 = GetDlgCtrlID(param_4);
  fVar1 = (float)iVar2 * _DAT_5df24180;
  pfVar4 = (float *)(param_1 + 0x19);
  if (param_1[0x18] == 0) {
    pfVar4 = (float *)(param_1 + 0x1d);
  }
  switch(iVar3) {
  case 0x48a:
    *pfVar4 = fVar1;
    (**(code **)(*param_1 + 0x2c))(param_1);
    return 0;
  case 0x48b:
    pfVar4[1] = fVar1;
    (**(code **)(*param_1 + 0x2c))(param_1);
    return 0;
  case 0x48c:
    pfVar4[3] = fVar1;
    (**(code **)(*param_1 + 0x2c))(param_1);
    return 0;
  case 0x48d:
    pfVar4[2] = fVar1;
    (**(code **)(*param_1 + 0x2c))(param_1);
    return 0;
  default:
    return 0;
  }
}


