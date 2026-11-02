/* Module: vidpcore.dll
   Function: FUN_5de66240
   Address: 5de66240
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x5de66363) */

int __fastcall FUN_5de66240(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  FUN_5de9f070();
  *(undefined ***)(param_1 + 0xbc) = &PTR_LAB_5df1c7b4;
  *(undefined **)(param_1 + 0xd4) = &DAT_5df38c38;
  *(undefined **)(param_1 + 0xd8) = &DAT_5df38c28;
  *(undefined **)(param_1 + 0xdc) = &DAT_5df38c18;
  *(undefined **)(param_1 + 0xe0) = &DAT_5df38c08;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  uVar1 = DAT_5df42788;
  *(undefined ***)(param_1 + 0xfc) = &PTR_LAB_5df1f260;
  *(int *)(param_1 + 0xf0) = (int)&PTR_LAB_5df18998;
  *(undefined ***)(param_1 + 0xf4) = &PTR_LAB_5df18984;
  *(undefined ***)(param_1 + 0xf8) = &PTR_LAB_5df1895c;
  *(undefined ***)(param_1 + 0xfc) = &PTR_LAB_5df18944;
  *(undefined ***)(param_1 + 0x100) = &PTR_LAB_5df18920;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1b4));
  *(undefined4 *)(param_1 + 0x110) = uVar1;
  *(undefined **)(param_1 + 0x104) = &DAT_5df1eec8;
  *(undefined4 *)(param_1 + 0x108) = 0x4e4;
  *(undefined4 *)(param_1 + 0x10c) = 0x17;
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  *(undefined4 *)(param_1 + 0x1ac) = 0;
  puVar3 = (undefined4 *)(param_1 + 0x118);
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_1 + 0x128) = 1;
  *(undefined4 *)(param_1 + 300) = 1;
  *(undefined4 *)(param_1 + 0x118) = 2;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0x3ff00000;
  *(undefined4 **)(param_1 + 0x140) = &DAT_5df17ca0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  (**(code **)(*(int *)(param_1 + 0xf0) + 0x24))(param_1 + 0x1d0,*(undefined4 *)(param_1 + 0x104));
  *(undefined4 *)(param_1 + 0x220) = 0;
  *(undefined4 *)(param_1 + 0x220) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x224) = 0;
  *(undefined4 *)(param_1 + 0x90) = 2;
  *(undefined4 *)(param_1 + 0x94) = 2;
  *(undefined4 *)(param_1 + 0x128) = 2;
  *(undefined4 *)(param_1 + 300) = 2;
  *(undefined4 *)(param_1 + 0x118) = 5;
  *(undefined4 *)(param_1 + 0x88) = 0xc;
  *(undefined4 *)(param_1 + 0x70) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x130) = 0x81;
  return param_1;
}


