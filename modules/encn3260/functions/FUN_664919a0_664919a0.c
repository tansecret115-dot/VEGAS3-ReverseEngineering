/* Module: encn3260.dll
   Function: FUN_664919a0
   Address: 664919a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664919a0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = operator_new(0x11);
  puVar2 = operator_new(0xc);
  *(char *)puVar2 = (char)((uint)param_1 >> 0x18);
  *(char *)((int)puVar2 + 1) = (char)((uint)param_1 >> 0x10);
  *(char *)((int)puVar2 + 2) = (char)((uint)param_1 >> 8);
  *(char *)((int)puVar2 + 3) = (char)param_1;
  *(char *)(puVar2 + 1) = (char)((uint)param_2 >> 0x18);
  *(char *)((int)puVar2 + 5) = (char)((uint)param_2 >> 0x10);
  *(char *)((int)puVar2 + 6) = (char)((uint)param_2 >> 8);
  *(char *)((int)puVar2 + 7) = (char)param_2;
  *(char *)(puVar2 + 2) = (char)((uint)param_3 >> 0x18);
  *(char *)((int)puVar2 + 9) = (char)((uint)param_3 >> 0x10);
  *(char *)((int)puVar2 + 10) = (char)((uint)param_3 >> 8);
  *(char *)((int)puVar2 + 0xb) = (char)param_3;
  *puVar1 = 0;
  puVar1[1] = 0xff;
  puVar1[2] = 1;
  *(undefined4 *)(puVar1 + 3) = *puVar2;
  *(undefined4 *)(puVar1 + 7) = puVar2[1];
  *(undefined4 *)(puVar1 + 0xb) = puVar2[2];
  FUN_66492030(this,puVar1,(undefined1 *)((int)(puVar1 + 3) + (0xc - (int)puVar1)));
  return;
}


