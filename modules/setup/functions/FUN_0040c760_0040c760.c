/* Module: Setup.exe
   Function: FUN_0040c760
   Address: 0040c760
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 __fastcall FUN_0040c760(void *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  bool bVar5;
  int local_360 [9];
  uint local_33c;
  int local_338;
  CHAR local_30c [260];
  undefined1 local_208;
  undefined1 local_104;
  
  piVar4 = local_360;
  for (iVar2 = 0xd8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
  }
  iVar2 = 0;
  uVar3 = 0;
  local_30c[0] = '\0';
  local_208 = 0;
  local_104 = 0;
  iVar1 = FUN_00411200(param_1,local_360);
  while (iVar1 == 0) {
    iVar1 = FUN_0040c710(param_1,local_30c);
    if (iVar1 == 0) {
      bVar5 = CARRY4(uVar3,local_33c);
      uVar3 = uVar3 + local_33c;
      iVar2 = iVar2 + local_338 + (uint)bVar5;
    }
    iVar1 = FUN_004112c0(param_1,local_360);
  }
  return CONCAT44(iVar2,uVar3);
}


