/* Module: vidcap30.exe
   Function: FUN_0046cea0
   Address: 0046cea0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_0046cea0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  undefined4 uVar1;
  HGLOBAL pvVar2;
  LPVOID pvVar3;
  int iVar4;
  
  FUN_005837e0(param_2,param_3,DAT_00592f58,DAT_00592f5c,DAT_00592f60,DAT_00592f64);
  param_1[0x1c] = &PTR_LAB_00593284;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1e));
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  FUN_0057ad30();
  FUN_0057ad30();
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x52] = 0;
  param_1[0x54] = 0;
  param_1[0x58] = 0;
  param_1[0x5a] = 0;
  param_1[0x5c] = 0;
  param_1[0x5e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x53] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x59] = 0;
  param_1[0x5b] = 0;
  param_1[0x5d] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 30000;
  param_1[0x61] = 0x3e9;
  *param_1 = &PTR_LAB_00593238;
  param_1[3] = &PTR_LAB_005931fc;
  param_1[4] = &PTR_LAB_005931e8;
  param_1[0x1c] = &PTR_LAB_005931d0;
  param_1[0x1d] = &PTR_LAB_00593180;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x16));
  pvVar2 = GlobalAlloc(0x40,0x110);
  pvVar3 = GlobalLock(pvVar2);
  if (pvVar3 == (LPVOID)0x0) {
LAB_0046d003:
    *param_4 = -0x7ff8fff2;
  }
  else {
    iVar4 = FUN_0046daa0("Reader video output pin",param_1,param_4,L"Video Output");
    if (iVar4 == 0) goto LAB_0046d003;
  }
  if (*param_4 < 0) goto LAB_0046d1b9;
  pvVar2 = GlobalAlloc(0x40,0x110);
  pvVar3 = GlobalLock(pvVar2);
  if (pvVar3 == (LPVOID)0x0) {
LAB_0046d04c:
    *param_4 = -0x7ff8fff2;
  }
  else {
    iVar4 = FUN_0046d620("Reader audio output pin",param_1,param_4,L"Audio Output");
    if (iVar4 == 0) goto LAB_0046d04c;
  }
  if (-1 < *param_4) {
    param_1[0x77] = DAT_005a2498;
    param_1[0x78] = DAT_005a249c;
    param_1[0x79] = DAT_005a24a0;
    uVar1 = DAT_005a24a4;
    param_1[0x74] = 0xfffcc83f;
    param_1[0x75] = 0;
    param_1[0x7a] = uVar1;
    param_1[0x70] = 0xffa0cf3f;
    param_1[0x72] = 0xffa0cf3f;
    param_1[0x76] = 0;
    iVar4 = (-(uint)(param_1[0x4a] != 0) & 0x200000) + 0xc0c01f40;
    param_1[0x6f] = iVar4;
    param_1[0x71] = iVar4;
    param_1[0x73] = (-(uint)(param_1[0x4a] != 0) & 0x200000) - 0x3f0001;
    FUN_0057aea0(&DAT_005a35f8);
    FUN_0057aec0(&DAT_005a31f8);
    FUN_0057af70(&DAT_005a2ba8);
    FUN_0057af20(0);
    iVar4 = FUN_0046b990(param_1);
    if (iVar4 < 0) {
      *param_4 = iVar4;
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x16));
      return param_1;
    }
    FUN_0057aea0(&DAT_005a35e8);
    FUN_0057aec0(&DAT_005a3238);
    FUN_0057af70(&DAT_005a2b88);
    FUN_0057af20(0);
    *(undefined2 *)(param_1 + 0x62) = 1;
    *(undefined2 *)((int)param_1 + 0x18a) = 0;
    param_1[99] = 0;
    param_1[100] = 0;
    *(undefined2 *)(param_1 + 0x65) = 0;
    *(undefined2 *)((int)param_1 + 0x196) = 0x10;
    *(undefined2 *)(param_1 + 0x66) = 0;
    iVar4 = FUN_0046bb20(param_1);
    if (-1 < iVar4) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x16));
      return param_1;
    }
    *param_4 = iVar4;
  }
LAB_0046d1b9:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x16));
  return param_1;
}


