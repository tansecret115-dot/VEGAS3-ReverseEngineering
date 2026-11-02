/* Module: sfmarket2.dll
   Function: FUN_0042ad30
   Address: 0042ad30
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0042ad30(int param_1,uchar *param_2,int param_3,LPCSTR param_4)

{
  int iVar1;
  int local_104 [65];
  
  if (((param_2 == (uchar *)0x0) || (param_1 == 0)) || (param_3 == 0)) {
    return -0x7ff8ffa9;
  }
  iVar1 = FUN_0042a420(param_1,"exitpage",2,local_104,0x104,(uchar *)0x0);
  if (-1 < iVar1) {
    _mbscpy(param_2,(uchar *)local_104);
    return iVar1;
  }
  if (param_4 != (LPCSTR)0x0) {
    lstrcpynA((LPSTR)param_2,param_4,param_3);
    param_2[param_3 + -1] = '\0';
    return iVar1;
  }
  _mbscpy(param_2,"");
  return iVar1;
}


