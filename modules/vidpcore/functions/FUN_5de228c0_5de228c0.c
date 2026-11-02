/* Module: vidpcore.dll
   Function: FUN_5de228c0
   Address: 5de228c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_5de228c0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_5de055a0();
  *(undefined ***)(param_1 + 0x100) = &PTR_LAB_5df1a620;
  *(undefined ***)(param_1 + 0x108) = &PTR_LAB_5df186b8;
  puVar2 = (undefined4 *)(param_1 + 0x110);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0x3ff00000;
  *(undefined ***)(param_1 + 0x140) = &PTR_LAB_5df1a608;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x148));
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0x144) = 0;
  FUN_5de82930(0x140,0xf0);
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  *(undefined4 *)(param_1 + 0x1ac) = 0;
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  *(undefined4 *)(param_1 + 0x1bc) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x168) = 1;
  *(undefined4 *)(param_1 + 0x110) = 0xb;
  *(undefined4 *)(param_1 + 0x11c) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x128) = 0xc1;
  return param_1;
}


