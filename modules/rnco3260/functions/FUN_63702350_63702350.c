/* Module: rnco3260.dll
   Function: FUN_63702350
   Address: 63702350
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63702350(uint *param_1,ushort *param_2,uint *param_3,int param_4,ushort *param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  ushort *puVar3;
  uint *puVar4;
  uint *puVar5;
  
  puVar5 = param_3;
  puVar3 = param_2;
  param_2 = param_5;
  param_3 = (uint *)param_4;
  puVar4 = param_1;
  param_1 = (uint *)(param_4 >> 1);
  if (param_4 == 0) {
    return;
  }
  do {
    uVar2 = (uint)*param_2;
    uVar1 = *puVar4;
    param_2 = param_2 + 1;
    uVar2 = (((uVar2 & 0xf800) << 3 | uVar2 & 0x7e0) << 2 | uVar2 & 0x1f) << 3;
    do {
      *puVar5 = uVar2;
      *(uint *)puVar3 = ((uVar1 ^ uVar2) >> 1 & 0x7f7f7f) + (uVar1 & uVar2);
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
      puVar3 = puVar3 + 2;
      param_3 = (uint *)((int)param_3 + -1);
      if (param_3 == (uint *)0x0) {
        return;
      }
      param_1 = (uint *)((int)param_1 - param_6);
    } while (-1 < (int)param_1);
    param_1 = (uint *)((int)param_1 + param_4);
  } while( true );
}


