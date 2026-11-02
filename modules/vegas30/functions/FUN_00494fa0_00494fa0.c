/* Module: vegas30.exe
   Function: FUN_00494fa0
   Address: 00494fa0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0049503f) */
/* WARNING: Removing unreachable block (ram,0x00494ff5) */
/* WARNING: Removing unreachable block (ram,0x00495003) */
/* WARNING: Removing unreachable block (ram,0x0049504d) */

undefined4 FUN_00494fa0(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint *puVar6;
  longlong lVar7;
  
  puVar6 = param_2;
  uVar1 = *param_2;
  uVar2 = *(uint *)(param_1 + 400);
  uVar3 = param_2[1];
  lVar4 = CONCAT44((uVar3 - *(int *)(param_1 + 0x194)) - (uint)(uVar1 < uVar2),uVar1 - uVar2);
  lVar5 = CONCAT44(*(int *)(param_1 + 0x194) + uVar3 + (uint)CARRY4(uVar2,uVar1),uVar2 + uVar1);
  param_2 = (uint *)0xffffffff;
  lVar7 = FUN_004bbb60(param_1,uVar1,uVar3,0xffffffff,&param_2);
  if (((lVar4 <= lVar7) && (lVar7 <= lVar5)) && (-1 < (int)param_2)) {
    *(longlong *)puVar6 = lVar7;
    return 1;
  }
  lVar7 = FUN_004bbb60(param_1,*puVar6,puVar6[1],1,&param_2);
  if (((lVar4 <= lVar7) && (lVar7 <= lVar5)) && (-1 < (int)param_2)) {
    *(longlong *)puVar6 = lVar7;
    return 1;
  }
  return 0;
}


