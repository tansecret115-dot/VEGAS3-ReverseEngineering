/* Module: sftrkfx1.dll
   Function: FUN_5cc00670
   Address: 5cc00670
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5cc00670(HKEY param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  LSTATUS LVar2;
  HKEY local_34;
  CHAR local_30 [48];
  
  local_34 = (HKEY)0x0;
  iVar1 = FUN_5cbff8c0(param_2,local_30);
  if (iVar1 < 0) {
    *param_3 = local_34;
    return iVar1;
  }
  LVar2 = RegOpenKeyExA(param_1,local_30,0,0x2001f,&local_34);
  if (LVar2 != 0) {
    *param_3 = 0;
    return -0x7ff8fffb;
  }
  *param_3 = local_34;
  return iVar1;
}


