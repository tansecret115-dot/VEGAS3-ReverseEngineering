/* Module: encn3260.dll
   Function: FUN_664b8200
   Address: 664b8200
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __cdecl FUN_664b8200(int param_1,byte param_2)

{
  int iVar1;
  void *pvVar2;
  
  if ((param_2 & 4) != 0) {
    return true;
  }
  iVar1 = (uint)*(ushort *)(param_1 + 0x486) * *(int *)(param_1 + 0x47c);
  pvVar2 = malloc((((int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3) + 3U & 0xfffffffc) *
                  *(int *)(param_1 + 0x480));
  *(void **)(param_1 + 0x8a4) = pvVar2;
  return pvVar2 != (void *)0x0;
}


