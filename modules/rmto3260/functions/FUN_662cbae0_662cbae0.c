/* Module: rmto3260.dll
   Function: FUN_662cbae0
   Address: 662cbae0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662cbae0(int param_1)

{
  int iVar1;
  char *local_10 [3];
  
  FUN_662eefd0(local_10);
  FUN_662d08d0((undefined4 *)(param_1 + 0x24));
  iVar1 = FUN_662f5900((int *)local_10,&DAT_6630a2dc,(char *)0x0);
  if (-1 < iVar1) {
    iVar1 = FUN_662d08f0((undefined4 *)(param_1 + 0x24),local_10[0]);
  }
  FUN_662ef0f0((int *)local_10);
  return iVar1;
}


