/* Module: vegas30.exe
   Function: FUN_00449cd0
   Address: 00449cd0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00449cd0(LPCSTR param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBX;
  int *unaff_ESI;
  uint uVar4;
  int *local_320;
  uint local_31c;
  int *local_318;
  uint local_314;
  int local_310;
  undefined1 uStack_211;
  WCHAR aWStack_210 [264];
  
  local_318 = (int *)0x0;
  local_310 = _SfVideoPlugin_GetInterface_12(&DAT_0060f778,&local_318,param_1);
  if (local_310 < 0) {
    uVar3 = _SfDSFilter_LoadPreset_12(param_2,param_3,1);
    return uVar3;
  }
  local_320 = (int *)0x0;
  local_31c = 0;
  local_314 = 0xffffffff;
  iVar1 = _SfVideoPlugin_GetInterface_12(&DAT_0060f778,&local_320,param_1);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*local_320 + 0xc))(local_320,&local_31c);
    uVar4 = 0;
    uVar3 = local_31c;
    if (0 < unaff_EBX) {
      do {
        (**(code **)(*unaff_ESI + 0x10))(unaff_ESI,uVar4,aWStack_210,0x104);
        if (-1 < iVar1) {
          if ((&stack0x00000000 == (undefined1 *)0x210) || (aWStack_210[0] != L'\0')) {
            WideCharToMultiByte(0,0,aWStack_210,-1,(LPSTR)&local_314,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
          }
          else if (&stack0x00000000 != (undefined1 *)0x314) {
            local_314 = local_314 & 0xffffff00;
          }
          uStack_211 = 0;
          iVar2 = lstrcmpA((LPCSTR)&local_314,param_1);
          uVar3 = uVar4;
          if (iVar2 == 0) break;
        }
        uVar4 = uVar4 + 1;
        uVar3 = local_31c;
      } while ((int)uVar4 < unaff_EBX);
    }
    local_31c = uVar3;
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
    if (local_314 != 0xffffffff) {
      (**(code **)(*local_318 + 0x14))(local_318,local_314);
      (**(code **)(*local_320 + 8))(local_320);
      return local_31c;
    }
  }
  local_310 = _SfDSFilter_LoadPreset_12(param_2,param_3,1);
  (**(code **)(*local_318 + 8))(local_318);
  return local_314;
}


