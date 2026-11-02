/* Module: sfcdi.dll
   Function: Read
   Address: 5bf05d60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __stdcall CSfReadAudio::Read(unsigned char *,unsigned long,unsigned long *) */

long CSfReadAudio::Read(uchar *param_1,ulong param_2,ulong *param_3)

{
  long lVar1;
  uchar *puVar2;
  ulong uVar3;
  ulong *puVar4;
  DWORD DVar5;
  ulong *puVar6;
  uint *in_stack_00000010;
  
  puVar4 = param_3;
                    /* 0x5d60  20  ?Read@CSfReadAudio@@QAGJPAEKPAK@Z */
  puVar2 = param_1;
  if (*(int *)(*(int *)(param_1 + 0x30) + 0x24) - (int)param_3 < *(int *)(param_1 + 0x3c)) {
    SetEvent(*(HANDLE *)(param_1 + 0x38));
  }
  uVar3 = param_2;
  puVar6 = (ulong *)0x0;
  if (puVar4 == (ulong *)0x0) {
    *in_stack_00000010 = 0;
    return 0;
  }
  do {
    param_1 = (uchar *)0x0;
    FUN_5bf18790(*(void **)(puVar2 + 0x30),(undefined4 *)((int)puVar6 + uVar3),
                 (int)puVar4 - (int)puVar6,(int *)&param_1);
    puVar6 = (ulong *)((int)puVar6 + (int)param_1);
    if (param_1 == (uchar *)0x0) {
      if (*(int *)(puVar2 + 0x28) != 0) {
        lVar1 = *(long *)(puVar2 + 0x28);
        *in_stack_00000010 = (uint)puVar6;
        return lVar1;
      }
      DVar5 = WaitForSingleObject(*(HANDLE *)puVar2,0);
      if (DVar5 == 0) {
        *in_stack_00000010 = (uint)puVar6;
        return 0;
      }
    }
    if (puVar4 <= puVar6) {
      *in_stack_00000010 = (uint)puVar6;
      return 0;
    }
  } while( true );
}


