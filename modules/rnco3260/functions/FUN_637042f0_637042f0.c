/* Module: rnco3260.dll
   Function: FUN_637042f0
   Address: 637042f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_637042f0(uint *param_1,int param_2,int param_3,int param_4,undefined1 *param_5,int param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  int iVar5;
  
  puVar4 = param_5;
  iVar5 = param_6 >> 1;
  param_5 = (undefined1 *)param_4;
  if (param_4 != 0) {
    iVar1 = param_3 - (int)param_1;
    iVar2 = param_2 - (int)param_1;
    do {
      uVar3 = (uint)CONCAT21(CONCAT11(*puVar4,puVar4[1]),puVar4[2]);
      *(uint *)(iVar1 + (int)param_1) = uVar3;
      *(uint *)(iVar2 + (int)param_1) = ((*param_1 ^ uVar3) >> 1 & 0x7f7f7f) + (*param_1 & uVar3);
      param_1 = param_1 + 1;
      do {
        puVar4 = puVar4 + 3;
        iVar5 = iVar5 - param_4;
      } while (-1 < iVar5);
      iVar5 = iVar5 + param_6;
      param_5 = param_5 + -1;
    } while (param_5 != (undefined1 *)0x0);
  }
  return;
}


