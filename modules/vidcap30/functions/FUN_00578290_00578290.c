/* Module: vidcap30.exe
   Function: FUN_00578290
   Address: 00578290
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00578290(HKEY param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  LSTATUS LVar2;
  HKEY local_34;
  CHAR local_30 [48];
  
  local_34 = (HKEY)0x0;
  iVar1 = FUN_005774e0(param_2,local_30,0x2d);
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


