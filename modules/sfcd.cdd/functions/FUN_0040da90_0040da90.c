/* Module: sfcd.cdd
   Function: FUN_0040da90
   Address: 0040da90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040da90(byte param_1,int param_2)

{
  int iVar1;
  undefined4 *in_EAX;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  
  *in_EAX = 0;
  pbVar3 = (byte *)(param_2 + 1);
  iVar4 = param_2 - (int)pbVar3;
  iVar1 = 1 - (int)pbVar3;
  in_EAX[1] = 0;
  *(undefined1 *)in_EAX = 2;
  iVar2 = 6;
  do {
    FUN_0041f150(&param_1,pbVar3[iVar4] - 0x30);
    FUN_0041f150((byte *)&param_2,*pbVar3 - 0x30);
    param_1 = param_1 << 4;
    pbVar3[(int)in_EAX + iVar1] = (byte)param_2 | param_1;
    pbVar3 = pbVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 0;
}


