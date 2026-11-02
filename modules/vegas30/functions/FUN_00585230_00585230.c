/* Module: vegas30.exe
   Function: FUN_00585230
   Address: 00585230
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00585230(void)

{
  HGLOBAL pvVar1;
  LPVOID pvVar2;
  undefined4 uVar3;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_14 = 1;
  local_10 = 4;
  local_c = 4;
  local_8 = 4000;
  local_4 = 5000;
  pvVar1 = GlobalAlloc(0x40,4);
  pvVar2 = GlobalLock(pvVar1);
  if (pvVar2 == (LPVOID)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_005851f0();
  }
  pvVar1 = GlobalAlloc(0x40,4);
  pvVar2 = GlobalLock(pvVar1);
  FUN_00587a40(&local_14,pvVar2,uVar3);
  return;
}


