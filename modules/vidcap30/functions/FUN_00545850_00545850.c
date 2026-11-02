/* Module: vidcap30.exe
   Function: FUN_00545850
   Address: 00545850
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00545850(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  puVar5 = param_1;
  uVar1 = *param_1;
  uVar2 = param_1[2];
  param_1 = (uint *)uVar2;
  if (uVar1 <= uVar2) {
    param_1 = (uint *)uVar1;
  }
  uVar7 = uVar2;
  if (uVar2 <= uVar1) {
    uVar7 = uVar1;
  }
  uVar3 = puVar5[3];
  uVar4 = puVar5[1];
  uVar6 = uVar3;
  if (uVar4 <= uVar3) {
    uVar6 = uVar4;
  }
  uVar8 = uVar3;
  if (uVar3 <= uVar4) {
    uVar8 = uVar4;
  }
  if ((uVar1 == 0xffff) || (uVar2 == 0xffff)) {
    param_1 = (uint *)0x0;
    uVar7 = 0xff00;
  }
  if ((uVar4 == 0xffff) || (uVar3 == 0xffff)) {
    uVar6 = 0;
    uVar8 = 0xff00;
  }
  *param_2 = (uint)param_1;
  *param_3 = uVar6;
  *param_4 = uVar7;
  *param_5 = uVar8;
  return;
}


