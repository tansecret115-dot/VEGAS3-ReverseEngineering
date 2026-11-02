/* Module: rmto3260.dll
   Function: FUN_662d0dc0
   Address: 662d0dc0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_662d0dc0(void *this,int param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int local_10 [3];
  
  pcVar1 = param_2;
  param_2 = (char *)0x0;
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  iVar2 = FUN_662d0970(&param_2,*(undefined4 **)(param_1 + 0x2e),
                       CONCAT22((short)((uint)this >> 0x10),(ushort)*(byte *)(param_1 + 0x2d)));
  if ((-1 < iVar2) && (param_2 != (char *)0x0)) {
    FUN_662ef160(local_10,param_2);
    iVar3 = FUN_662ef820(local_10,param_3);
    if (iVar3 == 0) {
      pcVar1[0] = '\x01';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
    }
    FUN_662d08d0(&param_2);
    FUN_662ef0f0(local_10);
  }
  return iVar2;
}


