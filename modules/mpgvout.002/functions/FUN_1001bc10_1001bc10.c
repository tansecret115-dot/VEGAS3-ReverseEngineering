/* Module: mpgvout.002
   Function: FUN_1001bc10
   Address: 1001bc10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_1001bc10(int *param_1,int param_2,int param_3,int *param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9,uint param_10,uint param_11,uint param_12)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = param_8 + param_5;
  uVar4 = (param_10 & 1) * 4 | param_12 | (param_11 & 1) * 2;
  iVar3 = (((int)param_11 >> 1) + param_9) * param_6;
  (**(code **)(PTR_PTR_100357b8 + uVar4 * 4))
            (iVar1 + *param_4 + iVar3 + ((int)param_10 >> 1),param_2 + *param_1,8,param_7,param_6,
             param_3);
  (**(code **)(PTR_PTR_100357b8 + uVar4 * 4))
            (((int)param_10 >> 1) + 8 + iVar1 + *param_4 + iVar3,param_2 + *param_1 + 8,8,param_7,
             param_6,param_3);
  iVar3 = param_6 >> 1;
  iVar2 = param_10 - ((int)param_10 >> 0x1f);
  uVar4 = param_11 - ((int)param_11 >> 0x1f);
  iVar1 = (iVar1 >> 1) + ((param_9 >> 1) + ((int)uVar4 >> 2)) * iVar3 + (iVar2 >> 2);
  uVar4 = iVar2 * 2 & 4U | param_12 | uVar4 & 2;
  (**(code **)(PTR_PTR_100357b8 + uVar4 * 4))
            (iVar1 + param_4[1],(param_2 >> 1) + param_1[1],8,param_7 >> 1,iVar3,param_3 >> 1);
  (**(code **)(PTR_PTR_100357b8 + uVar4 * 4))
            (iVar1 + param_4[2],(param_2 >> 1) + param_1[2],8,param_7 >> 1,iVar3,param_3 >> 1);
  return;
}


