/* Module: sfcdi.dll
   Function: FUN_5bf39510
   Address: 5bf39510
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf39510(uint *param_1,uint param_2,int param_3,uchar *param_4)

{
  int iVar1;
  int iVar2;
  uchar *_Dest;
  
  if ((param_1 == (uint *)0x0) || (*param_1 == 0)) {
    return param_3;
  }
  if (*param_1 <= param_2) {
    return param_3;
  }
  if (param_4 == (uchar *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = lstrlenA((LPCSTR)param_4);
    iVar1 = iVar1 + 1;
  }
  iVar1 = FUN_5bf2af60((int)param_1,param_2,iVar1 + 0x28);
  if (iVar1 != 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1[2] + param_2 * 4);
  if (param_4 == (uchar *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = lstrlenA((LPCSTR)param_4);
    iVar2 = iVar2 + 1;
  }
  *(int *)(iVar1 + 0x24) = iVar2;
  _Dest = (uchar *)FUN_5bf39820(iVar1);
  _mbscpy(_Dest,param_4);
  return iVar1;
}


