/* Module: sfcdi.dll
   Function: Initialize
   Address: 5bf05c10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __stdcall CSfReadAudio::Initialize(void) */

long CSfReadAudio::Initialize(void)

{
  HGLOBAL pvVar1;
  undefined4 *puVar2;
  uint *puVar3;
  HANDLE pvVar4;
  int in_stack_00000004;
  undefined2 local_14;
  undefined2 local_12;
  undefined4 local_10;
  undefined4 local_c;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
                    /* 0x5c10  19  ?Initialize@CSfReadAudio@@QAGJXZ */
  pvVar1 = GlobalAlloc(0x40,0x28);
  puVar2 = GlobalLock(pvVar1);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_5bf18620(puVar2);
  }
  *(undefined4 **)(in_stack_00000004 + 0x30) = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    return -0x7ff8fff2;
  }
  FUN_5bf18650((int)puVar2);
  pvVar1 = GlobalAlloc(0x42,0x18c);
  puVar3 = GlobalLock(pvVar1);
  *(uint **)(in_stack_00000004 + 0x2c) = puVar3;
  if (puVar3 == (uint *)0x0) {
    return -0x7ff8fff2;
  }
  local_14 = 1;
  local_12 = 2;
  local_10 = 0xac44;
  local_6 = 0x10;
  local_8 = 4;
  local_c = 0x2b110;
  local_4 = 0;
  FUN_5bf18d60(puVar3,(int)&local_14,0,*(int *)(in_stack_00000004 + 0x44));
  FUN_5bf18c70(*(int *)(in_stack_00000004 + 0x2c),0,0);
  *(undefined4 *)(in_stack_00000004 + 0x3c) = 0xac440;
  *(undefined4 *)(in_stack_00000004 + 0x40) = 0xac440;
  pvVar4 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
  *(HANDLE *)(in_stack_00000004 + 0x38) = pvVar4;
  return (-(uint)(pvVar4 != (HANDLE)0x0) & 0x7ff8fff2) + 0x8007000e;
}


