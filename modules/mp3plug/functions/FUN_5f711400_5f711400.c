/* Module: mp3plug.dll
   Function: FUN_5f711400
   Address: 5f711400
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5f711400(int param_1,uint param_2)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  int in_EAX;
  byte *pbVar4;
  int iVar5;
  uint *in_stack_00000010;
  uint *in_stack_00000014;
  
  *in_stack_00000010 = 0;
  *in_stack_00000014 = 0;
  if (*(uint *)(param_1 + 4) < 32000) {
    if (*(uint *)(param_1 + 4) < 16000) {
      return 0;
    }
    if (*(short *)(param_1 + 2) == 2) {
      iVar5 = 0x15;
    }
    else {
      iVar5 = 0xd;
    }
  }
  else if (*(short *)(param_1 + 2) == 2) {
    iVar5 = 0x24;
  }
  else {
    iVar5 = 0x15;
  }
  if ((((iVar5 + 0x78U <= param_2) && (pcVar1 = (char *)(iVar5 + in_EAX), *pcVar1 == 'X')) &&
      (pcVar1[1] == 'i')) && ((pcVar1[2] == 'n' && (pcVar1[3] == 'g')))) {
    pbVar4 = (byte *)(pcVar1 + 8);
    bVar2 = pcVar1[7];
    if ((bVar2 & 1) != 0) {
      bVar3 = *pbVar4;
      pbVar4 = (byte *)(pcVar1 + 0xc);
      *in_stack_00000010 =
           (uint)bVar3 << 0x18 | (uint)(byte)pcVar1[9] << 0x10 | (uint)(byte)pcVar1[10] << 8 |
           (uint)(byte)pcVar1[0xb];
    }
    if ((bVar2 & 2) != 0) {
      *in_stack_00000014 =
           (uint)*pbVar4 << 0x18 | (uint)pbVar4[1] << 0x10 | (uint)pbVar4[2] << 8 | (uint)pbVar4[3];
    }
    return 1;
  }
  return 0;
}


