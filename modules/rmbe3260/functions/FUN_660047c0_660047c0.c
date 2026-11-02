/* Module: rmbe3260.dll
   Function: FUN_660047c0
   Address: 660047c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_660047c0(int param_1)

{
  int iVar1;
  int *piVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  int iVar4;
  char *pcVar5;
  int local_44 [3];
  int local_38 [3];
  undefined1 local_2c [8];
  undefined1 local_24 [8];
  int local_1c;
  uint local_18;
  undefined4 uStack_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  local_8 = param_1;
  (**(code **)(**(int **)(param_1 + 0x11c) + 0x11c))(*(undefined4 *)(param_1 + 0x144));
  FUN_6605b650(local_44);
  FUN_6605b650(local_38);
  FUN_6605b900(local_38,(int *)(param_1 + 0x144));
  iVar4 = 0;
  do {
    if (iVar4 == 0) goto LAB_6600480f;
    do {
      if (iVar4 != 1) {
        piVar2 = FUN_6605bf20((int *)(param_1 + 0x144),&local_1c,iVar4 + 1);
        FUN_6605b900(local_44,piVar2);
        FUN_6605b770(&local_1c);
        iVar4 = 0;
        hModule = LoadLibraryA(s_kernel32_dll_6606c24c);
        if (hModule != (HMODULE)0x0) {
          pFVar3 = GetProcAddress(hModule,s_GetDiskFreeSpaceExA_6606c238);
          if (pFVar3 != (FARPROC)0x0) {
            iVar4 = (*pFVar3)(local_44[0],local_2c,local_24);
          }
          FreeLibrary(hModule);
        }
        iVar1 = local_8;
        if (iVar4 == 0) {
          (**(code **)(**(int **)(local_8 + 0x124) + 0x98))();
          (**(code **)(**(int **)(iVar1 + 0x128) + 0x98))(0);
        }
        else {
          if (local_c < 0x101) {
            if (local_c == 0) {
              if (local_10 < 0x40000001) {
                if (local_10 < 0x100001) {
                  local_18 = local_10;
                  pcVar5 = s___1f_K_6606c218;
                }
                else {
                  local_18 = local_10;
                  pcVar5 = s___1f_MB_6606c220;
                }
              }
              else {
                local_18 = local_10;
                pcVar5 = s___1f_GB_6606c228;
              }
            }
            else {
              local_18 = local_10 >> 0x14 | local_c << 0xc;
              pcVar5 = s___1f_GB_6606c228;
            }
          }
          else {
            local_18 = local_c;
            pcVar5 = s___1f_TB_6606c230;
          }
          uStack_14 = 0;
          FUN_6605bfd0(local_38,pcVar5);
          (**(code **)(**(int **)(local_8 + 0x128) + 0x11c))();
        }
        FUN_6605b770(local_38);
        FUN_6605b770(local_44);
        return;
      }
LAB_6600480f:
      iVar4 = FUN_6605bcc0(local_38,'\\');
    } while (iVar4 < 0);
    piVar2 = FUN_6605be40(local_38,&local_1c,iVar4 + 1);
    FUN_6605b900(local_38,piVar2);
    FUN_6605b770(&local_1c);
  } while( true );
}


