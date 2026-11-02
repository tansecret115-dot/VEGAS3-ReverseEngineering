/* Module: g2plug.dll
   Function: SfRealG2_Initialize
   Address: 5f806c40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfRealG2_Initialize(struct HINSTANCE__ *) */

long SfRealG2_Initialize(HINSTANCE__ *param_1)

{
  int iVar1;
  int *local_28;
  int *local_24;
  int local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
                    /* 0x6c40  39  ?SfRealG2_Initialize@@YGJPAUHINSTANCE__@@@Z */
  puStack_c = &DAT_5f86aea0;
  puStack_10 = &DAT_5f867560;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffcc;
  if (DAT_5f87749c == (int *)0x0) {
    local_8 = 0;
    ExceptionList = &local_14;
    FUN_5f806d60();
    iVar1 = RMACreateRMBuildEngine(&local_24);
    local_20 = iVar1;
    if ((iVar1 == 0) &&
       (iVar1 = (**(code **)*local_24)(local_24,&DAT_5f86a4e0,&DAT_5f87749c), local_20 = iVar1,
       local_24 != (int *)0x0)) {
      (**(code **)(*local_24 + 8))(local_24);
      local_24 = (int *)0x0;
    }
  }
  else {
    iVar1 = 0;
    ExceptionList = &local_14;
    local_1c = &stack0xffffffcc;
  }
  local_8 = 0xffffffff;
  if (-1 < iVar1) {
    if (((DAT_5f8774a0 == 0) &&
        (iVar1 = (**(code **)*DAT_5f87749c)(DAT_5f87749c,&DAT_5f86a4c0,&local_28), iVar1 == 0)) &&
       (iVar1 = (**(code **)(*local_28 + 0xc))(local_28,&DAT_5f86a450,0,&DAT_5f86a450,&DAT_5f8774a0)
       , local_28 != (int *)0x0)) {
      (**(code **)(*local_28 + 8))(local_28);
    }
    if (iVar1 < 0) {
      if (DAT_5f87749c != (int *)0x0) {
        (**(code **)(*DAT_5f87749c + 8))(DAT_5f87749c);
      }
      DAT_5f87749c = (int *)0x0;
    }
    else {
      DAT_5f8774a4 = DAT_5f8774a4 + 1;
    }
  }
  ExceptionList = local_14;
  return iVar1;
}


