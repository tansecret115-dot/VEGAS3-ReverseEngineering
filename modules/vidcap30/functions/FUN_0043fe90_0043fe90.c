/* Module: vidcap30.exe
   Function: FUN_0043fe90
   Address: 0043fe90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0043fe90(int param_1,uint *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined1 local_104 [260];
  
  uVar2 = DAT_005bb838;
  iVar1 = param_1 + 0xd8;
  FUN_00423d10(iVar1,local_104,0x104);
  *param_2 = 0;
  uVar3 = FUN_0042f360(uVar2);
  *param_2 = (*param_2 ^ uVar3) & 1 ^ *param_2;
  uVar3 = FUN_0042f300(uVar2);
  *param_2 = (uVar3 & 1) << 1 | *param_2 & 0xfffffffd;
  uVar3 = FUN_0042f330(uVar2);
  *param_2 = (uVar3 & 1) << 2 | *param_2 & 0xfffffffb;
  uVar3 = FUN_0042f390(uVar2);
  *param_2 = (uVar3 & 1) << 3 | *param_2 & 0xfffffff7;
  iVar4 = lstrcmpA((LPCSTR)(param_1 + 0x100),"");
  *param_2 = (uint)(iVar4 != 0) << 4 | *param_2 & 0xffffffef;
  uVar3 = FUN_00424d50(iVar1);
  *param_2 = (uVar3 & 1) << 5 | *param_2 & 0xffffffdf;
  iVar4 = lstrcmpA((LPCSTR)(param_1 + 0xa70),"No Capture Device");
  uVar3 = *param_2;
  uVar6 = (uint)(iVar4 != 0) << 6;
  *param_2 = uVar6 | uVar3 & 0xffffffbf;
  uVar5 = (*(uint *)(param_1 + 0x1ac4) & 1) << 8;
  *param_2 = uVar5 | uVar6 | uVar3 & 0xfffffebf;
  if ((((*(byte *)(param_1 + 0x1ac4) & 2) == 0) || ((*(uint *)(param_1 + 0x1ac0) & 1) == 0)) ||
     ((*(uint *)(param_1 + 0x1ac0) & 2) == 0)) {
    iVar4 = 0;
  }
  else {
    iVar4 = 1;
  }
  *param_2 = iVar4 << 7 | uVar5 | uVar6 | uVar3 & 0xfffffe3f;
  uVar3 = FUN_00424c80(iVar1);
  *param_2 = (uVar3 & 1) << 9 | *param_2 & 0xfffffdff;
  uVar3 = FUN_0042b3b0(iVar1);
  *param_2 = (uVar3 & 1) << 0xb | *param_2 & 0xfffff7ff;
  uVar3 = FUN_0042b380(iVar1);
  *param_2 = (uVar3 & 1) << 0xc | *param_2 & 0xffffefff;
  uVar3 = FUN_00427730(param_1 + 0xa48);
  *param_2 = (uVar3 & 1) << 0xd | *param_2 & 0xffffdfff;
  uVar3 = FUN_00434f90(param_1);
  *param_2 = (uVar3 & 1) << 10 | *param_2 & 0xfffffbff;
  return;
}


