/* Module: vegas30.exe
   Function: FUN_00468740
   Address: 00468740
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00468740(HDC param_1,int *param_2,int param_3,int param_4,DWORD param_5)

{
  int x;
  int iVar1;
  int w;
  int iVar2;
  int iVar3;
  
  x = *param_2;
  iVar3 = param_2[1];
  iVar1 = param_2[2];
  iVar2 = param_2[3];
  w = iVar1 - x;
  if ((param_3 * 2 < w) && (param_4 * 2 < iVar2 - iVar3)) {
    PatBlt(param_1,x,iVar3,w,param_4,param_5);
    iVar3 = iVar3 + param_4;
    PatBlt(param_1,x,iVar2 - param_4,w,param_4,param_5);
    iVar2 = (iVar2 - param_4) - iVar3;
    PatBlt(param_1,x,iVar3,param_3,iVar2,param_5);
    PatBlt(param_1,iVar1 - param_3,iVar3,param_3,iVar2,param_5);
    return;
  }
  PatBlt(param_1,x,iVar3,iVar1 - x,iVar2 - iVar3,param_5);
  return;
}


