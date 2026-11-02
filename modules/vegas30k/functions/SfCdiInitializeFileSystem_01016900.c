/* Module: vegas30k.dll
   Function: SfCdiInitializeFileSystem
   Address: 01016900
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfCdiInitializeFileSystem(struct tagFILE_SYSTEM_CAPS *,enum
   tagFILE_SYSTEM_TYPE,struct tagDIR_TREE *,struct HWND__ *) */

long SfCdiInitializeFileSystem
               (tagFILE_SYSTEM_CAPS *param_1,tagFILE_SYSTEM_TYPE param_2,tagDIR_TREE *param_3,
               HWND__ *param_4)

{
  long lVar1;
  undefined1 *puVar2;
  undefined4 unaff_retaddr;
  
                    /* 0x16900  309
                       ?SfCdiInitializeFileSystem@@YGJPAUtagFILE_SYSTEM_CAPS@@W4tagFILE_SYSTEM_TYPE@@PAUtagDIR_TREE@@PAUHWND__@@@Z
                        */
  FUN_01016830(param_3,0);
  if ((param_1 == (tagFILE_SYSTEM_CAPS *)0x0) || (param_2 == 0xffffffff)) {
    puVar2 = &DAT_80070057;
  }
  else {
    if ((*(int *)(param_3 + 0x4c) != 0) && (lVar1 = SfCdiDeinitializeFileSystem(param_3), lVar1 < 0)
       ) {
      return lVar1;
    }
    puVar2 = (undefined1 *)(**(code **)(param_1 + 8))(param_3 + 0x4c,param_4);
    if (-1 < (int)puVar2) {
      memmove(param_3 + 0x20,param_1,0x28);
      *(undefined4 *)(param_3 + 0x48) = unaff_retaddr;
      *(HWND__ **)(param_3 + 0x50) = param_4;
      lVar1 = DtPrepareAllDirEntries(param_3,*(tagDIR_ENTRY **)param_3);
      return lVar1;
    }
  }
  return (long)puVar2;
}


