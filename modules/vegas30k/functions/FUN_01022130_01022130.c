/* Module: vegas30k.dll
   Function: FUN_01022130
   Address: 01022130
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01022130(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  CHAR local_208 [260];
  CHAR local_104 [260];
  
  if (param_3 < 0) {
    iVar2 = -1;
    param_3 = -param_3;
  }
  else {
    iVar2 = 1;
  }
  if (**(int **)(param_1 + 0xc) == 9) {
    return -iVar2;
  }
  if (**(int **)(param_2 + 0xc) == 9) {
    return iVar2;
  }
  if (*(short *)(param_1 + 0x12) == 0) {
    param_1 = param_1 + 0x14;
  }
  else {
    param_1 = *(ushort *)(param_1 + 0x10) + 0x14 + param_1;
  }
  if (*(short *)(param_2 + 0x12) == 0) {
    param_2 = param_2 + 0x14;
  }
  else {
    param_2 = *(ushort *)(param_2 + 0x10) + 0x14 + param_2;
  }
  FUN_01021ac0(local_104,param_1,param_3 + -1);
  FUN_01021ac0(local_208,param_2,param_3 + -1);
  iVar1 = lstrcmpA(local_104,local_208);
  return iVar1 * iVar2;
}


