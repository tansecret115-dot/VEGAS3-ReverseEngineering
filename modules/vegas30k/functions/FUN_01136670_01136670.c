/* Module: vegas30k.dll
   Function: FUN_01136670
   Address: 01136670
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __thiscall FUN_01136670(int param_1,int param_2,LPWSTR param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  LPCSTR lpMultiByteStr;
  int iVar3;
  undefined4 local_304;
  CHAR local_300 [256];
  undefined1 local_200 [512];
  
  iVar3 = 0;
  piVar1 = *(int **)(param_1 + 0x2c);
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x10))(piVar1,0,local_200,0x100);
    while (iVar2 == 0) {
      iVar3 = iVar3 + 1;
      iVar2 = (**(code **)(**(int **)(param_1 + 0x2c) + 0x10))
                        (*(int **)(param_1 + 0x2c),iVar3,local_200,0x100);
    }
    if (param_2 < iVar3) {
      if (param_2 == 0) {
        lpMultiByteStr = (LPCSTR)_SfGetString2_8(DAT_0120e5c8,0x10c1);
        MultiByteToWideChar(0,1,lpMultiByteStr,-1,param_3,param_4);
        param_3[param_4 + -1] = L'\0';
        return false;
      }
      iVar3 = (**(code **)(**(int **)(param_1 + 0x2c) + 0x10))
                        (*(int **)(param_1 + 0x2c),param_2,param_3,param_4);
      return iVar3 == 0;
    }
  }
  local_304 = 0x100;
  iVar3 = _SfDSFilter_GetPresetName_20
                    (*(undefined4 *)(param_1 + 0x30),param_2 - iVar3,local_300,&local_304,0);
  if (iVar3 != 0) {
    return false;
  }
  MultiByteToWideChar(0,1,local_300,-1,param_3,param_4);
  param_3[param_4 + -1] = L'\0';
  return true;
}


