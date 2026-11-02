/* Module: sfcdi.dll
   Function: FUN_5bf39840
   Address: 5bf39840
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf39840(int *param_1,int param_2,undefined4 *param_3,uchar *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  uchar *_Dest;
  undefined4 *puVar3;
  
  if (param_4 == (uchar *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = lstrlenA((LPCSTR)param_4);
    iVar2 = iVar2 + 1;
  }
  iVar2 = FUN_5bf2ade0(param_1,(int *)0x0,iVar2 + 0x28,param_2,(int *)0x0);
  if (iVar2 != 0) {
    return -1;
  }
  if (param_2 < 0) {
    if (param_1 == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *param_1;
    }
    param_2 = iVar2 + -1;
  }
  puVar1 = *(undefined4 **)(param_1[2] + param_2 * 4);
  puVar3 = puVar1;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_3;
    param_3 = param_3 + 1;
    puVar3 = puVar3 + 1;
  }
  _Dest = (uchar *)FUN_5bf39820((int)puVar1);
  _mbscpy(_Dest,param_4);
  return param_2;
}


