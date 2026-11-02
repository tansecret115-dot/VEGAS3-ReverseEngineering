/* Module: pngu3266.dll
   Function: SetLabel
   Address: 606050db
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __thiscall CPNTreeControl::SetLabel(char *,unsigned long) */

ulong __thiscall CPNTreeControl::SetLabel(CPNTreeControl *this,char *param_1,ulong param_2)

{
  int iVar1;
  size_t sVar2;
  void *pvVar3;
  undefined4 local_30;
  undefined4 local_2c;
  char *local_20;
  int local_8;
  
                    /* 0x150db  1939  ?SetLabel@CPNTreeControl@@UAEKPADK@Z */
  if (*(void **)(this + 0xc0) != (void *)0x0) {
    local_8 = 0;
    iVar1 = FUN_60619b60(*(void **)(this + 0xc0),param_2,&local_8);
    if ((iVar1 != 0) && (local_8 != 0)) {
      if (*(void **)(local_8 + 4) != (void *)0x0) {
        operator_delete(*(void **)(local_8 + 4));
        *(undefined4 *)(local_8 + 4) = 0;
      }
      sVar2 = strlen(param_1);
      pvVar3 = operator_new(sVar2 + 1);
      *(void **)(local_8 + 4) = pvVar3;
      strcpy(*(char **)(local_8 + 4),param_1);
      memset(&local_30,0,0x28);
      local_30 = 1;
      local_20 = param_1;
      local_2c = **(undefined4 **)(local_8 + 0x10);
      SendMessageA(*(HWND *)(this + 0xc),0x110d,0,(LPARAM)&local_30);
      return 1;
    }
  }
  return 0;
}


