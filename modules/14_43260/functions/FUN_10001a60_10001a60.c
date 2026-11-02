/* Module: 14_43260.dll
   Function: FUN_10001a60
   Address: 10001a60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_10001a60(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,short *param_6,
            short *param_7,short *param_8,undefined2 *param_9)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  
  iVar2 = *(short *)((int)this + 800) * param_1 * 2;
  psVar1 = (short *)(*(int *)((int)this + 0x318) + iVar2);
  puVar5 = (undefined2 *)(*(int *)((int)this + 0x31c) + iVar2);
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *psVar1 * param_3 >> ((char)*puVar5 + 1U & 0x1f);
  }
  iVar3 = psVar1[1] * param_4 >> ((char)puVar5[1] + 1U & 0x1f);
  iVar4 = psVar1[2] * param_5 >> ((char)puVar5[2] + 1U & 0x1f);
  puVar5 = param_9 + *(int *)((int)this + 0x264);
  if (param_2 == 0) {
    for (; param_9 < puVar5; param_9 = param_9 + 1) {
      *param_9 = (short)(*param_7 * iVar3 + *param_8 * iVar4 >> 0xc);
      param_8 = param_8 + 1;
      param_7 = param_7 + 1;
    }
  }
  else if (param_9 < puVar5) {
    do {
      *param_9 = (short)(*param_6 * iVar2 + *param_7 * iVar3 + *param_8 * iVar4 >> 0xc);
      param_7 = param_7 + 1;
      param_9 = param_9 + 1;
      param_8 = param_8 + 1;
      param_6 = param_6 + 1;
    } while (param_9 < puVar5);
    return;
  }
  return;
}


