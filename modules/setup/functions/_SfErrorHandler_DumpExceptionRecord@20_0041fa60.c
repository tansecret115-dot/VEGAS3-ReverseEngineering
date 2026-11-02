/* Module: Setup.exe
   Function: _SfErrorHandler_DumpExceptionRecord@20
   Address: 0041fa60
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfErrorHandler_DumpExceptionRecord_20
               (LPSTR param_1,int param_2,undefined1 *param_3,int *param_4,uint param_5)

{
  LPSTR pCVar1;
  int *piVar2;
  ulong *puVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  SIZE_T SVar7;
  DWORD DVar8;
  uint uVar9;
  ulong *puVar10;
  char *pcVar11;
  LPSTR pCVar12;
  int iVar13;
  undefined4 *puVar14;
  code *pcVar15;
  int iVar16;
  CHAR *pCVar17;
  ulong *local_1a4;
  int local_1a0;
  ulong local_198;
  long local_194;
  long local_190;
  _MEMORY_BASIC_INFORMATION local_18c;
  _MEMORY_BASIC_INFORMATION local_170;
  CHAR local_154;
  undefined4 local_153;
  CHAR local_12c;
  undefined4 local_12b;
  CHAR local_104 [260];
  
                    /* 0x1fa60  119  _SfErrorHandler_DumpExceptionRecord@20 */
  iVar16 = param_4[1];
  piVar2 = (int *)*param_4;
  iVar6 = *piVar2;
  pCVar1 = param_1 + param_2;
  if (param_5 == 0) {
    param_5 = 0xff;
  }
  if ((param_5 & 1) != 0) {
    pcVar11 = "Unknown Type";
    iVar13 = 0;
    piVar4 = &DAT_0043a410;
    do {
      if (*piVar4 == iVar6) {
        pcVar11 = *(char **)(&UNK_0043a414 + iVar13 * 8);
        break;
      }
      piVar4 = piVar4 + 2;
      iVar13 = iVar13 + 1;
    } while (piVar4 < "control+c exit");
    local_154 = DAT_00433748;
    puVar14 = &local_153;
    for (iVar13 = 9; iVar13 != 0; iVar13 = iVar13 + -1) {
      *puVar14 = 0;
      puVar14 = puVar14 + 1;
    }
    *(undefined2 *)puVar14 = 0;
    *(undefined1 *)((int)puVar14 + 2) = 0;
    if (piVar2[4] == 2) {
      pcVar5 = "WRITE";
      if (piVar2[5] == 0) {
        pcVar5 = "READ";
      }
      wsprintfA(&local_154," %s:0x%X",pcVar5,piVar2[6]);
    }
    iVar6 = wsprintfA(param_1,"Exception 0x%X (%s)%s IP:0x%X\r\n",iVar6,pcVar11,&local_154,piVar2[3]
                     );
    param_1 = param_1 + iVar6;
    if (pCVar1 < param_1 + 0x32) {
      return;
    }
  }
  pcVar15 = wsprintfA_exref;
  if ((((param_5 & 2) != 0) &&
      (SVar7 = VirtualQuery((LPCVOID)piVar2[3],&local_170,0x1c), pcVar15 = wsprintfA_exref,
      SVar7 == 0x1c)) &&
     (DVar8 = GetModuleFileNameA(local_170.AllocationBase,local_104,0x104),
     pcVar15 = wsprintfA_exref, DVar8 != 0)) {
    iVar6 = piVar2[3] - (int)local_170.AllocationBase;
    pcVar11 = _SfGetFileNamePtrA_4(local_104);
    pcVar15 = wsprintfA_exref;
    iVar6 = wsprintfA(param_1,"In Module \'%s\' at Address 0x%X + 0x%X\r\n",pcVar11,
                      local_170.AllocationBase,iVar6);
    param_1 = param_1 + iVar6;
    if (pCVar1 < param_1 + 0x32) {
      return;
    }
  }
  local_1a4 = (ulong *)0x0;
  if ((param_5 & 0x20) != 0) {
    local_12c = DAT_00433748;
    puVar14 = &local_12b;
    for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar14 = 0;
      puVar14 = puVar14 + 1;
    }
    *(undefined2 *)puVar14 = 0;
    *(undefined1 *)((int)puVar14 + 2) = 0;
    SVar7 = VirtualQuery(*(LPCVOID *)(iVar16 + 0xc4),&local_18c,0x1c);
    if (SVar7 != 0) {
      wsprintfA(&local_12c,"0x%X-0x%X",local_18c.BaseAddress,
                local_18c.RegionSize + (int)local_18c.BaseAddress);
      local_1a4 = (ulong *)(local_18c.RegionSize + (int)local_18c.BaseAddress);
    }
    if (param_3 == (undefined1 *)0x0) {
      param_3 = &DAT_00433748;
    }
    pCVar17 = &local_12c;
    DVar8 = GetCurrentThreadId();
    iVar6 = wsprintfA(param_1,"Thread: %s ID=0x%X Stack=%s\r\n",param_3,DVar8,pCVar17);
    param_1 = param_1 + iVar6;
    pcVar15 = wsprintfA_exref;
    if (pCVar1 < param_1 + 0x32) {
      return;
    }
  }
  if ((param_5 & 4) != 0) {
    iVar6 = (*pcVar15)(param_1,"Registers:\r\n");
    pCVar12 = param_1 + iVar6;
    if (pCVar1 < pCVar12 + 0x32) {
      return;
    }
    iVar6 = (*pcVar15)(pCVar12," EAX=%08x CS=%04x EIP=%08x EFLGS=%08x\r\n",
                       *(undefined4 *)(iVar16 + 0xb0),*(undefined4 *)(iVar16 + 0xbc),
                       *(undefined4 *)(iVar16 + 0xb8),*(undefined4 *)(iVar16 + 0xc0));
    pCVar12 = pCVar12 + iVar6;
    if (pCVar1 < pCVar12 + 0x32) {
      return;
    }
    iVar6 = (*pcVar15)(pCVar12," EBX=%08x SS=%04x ESP=%08x EBP=%08x\r\n",
                       *(undefined4 *)(iVar16 + 0xa4),*(undefined4 *)(iVar16 + 200),
                       *(undefined4 *)(iVar16 + 0xc4),*(undefined4 *)(iVar16 + 0xb4));
    pCVar12 = pCVar12 + iVar6;
    if (pCVar1 < pCVar12 + 0x32) {
      return;
    }
    iVar6 = (*pcVar15)(pCVar12," ECX=%08x DS=%04x ESI=%08x FS=%04x\r\n",
                       *(undefined4 *)(iVar16 + 0xac),*(undefined4 *)(iVar16 + 0x98),
                       *(undefined4 *)(iVar16 + 0xa0),*(undefined4 *)(iVar16 + 0x90));
    pCVar12 = pCVar12 + iVar6;
    if (pCVar1 < pCVar12 + 0x32) {
      return;
    }
    iVar6 = (*pcVar15)(pCVar12," EDX=%08x ES=%04x EDI=%08x GS=%04x\r\n",
                       *(undefined4 *)(iVar16 + 0xa8),*(undefined4 *)(iVar16 + 0x94),
                       *(undefined4 *)(iVar16 + 0x9c),*(undefined4 *)(iVar16 + 0x8c));
    param_1 = pCVar12 + iVar6;
    if (pCVar1 < param_1 + 0x32) {
      return;
    }
  }
  if ((param_5 & 8) != 0) {
    iVar6 = (*pcVar15)(param_1,"Bytes at CS:EIP:\r\n");
    pcVar11 = param_1 + iVar6;
    if (pCVar1 < pcVar11 + 0x32) {
      return;
    }
    uVar9 = SfErrorHandler_DumpHex
                      (pcVar11,(int)pCVar1 - (int)pcVar11,*(void **)(iVar16 + 0xb8),0x10);
    param_1 = pcVar11 + uVar9;
    if (pCVar1 < param_1 + 0x32) {
      return;
    }
  }
  if ((param_5 & 0x10) != 0) {
    iVar6 = (*pcVar15)(param_1,"Stack Dump:\r\n");
    pcVar11 = param_1 + iVar6;
    if (pcVar11 + 0x32 <= pCVar1) {
      puVar3 = *(ulong **)(iVar16 + 0xc4);
      iVar16 = 0;
      local_198 = 0;
      local_190 = 0;
      local_194 = 0x10;
      if (local_1a4 <= puVar3 + 0x14) {
        if ((int)((int)local_1a4 - (int)puVar3 & 0xfffffffcU) < 0x40) {
          local_194 = 0x10;
        }
        else {
          local_194 = (int)local_1a4 - (int)puVar3 >> 2;
        }
      }
      uVar9 = SfErrorHandler_DumpStack
                        (pcVar11,(int)pCVar1 - (int)pcVar11,puVar3,local_194,&local_198,&local_190);
      pcVar11 = pcVar11 + uVar9;
      if (pcVar11 + 0x32 <= pCVar1) {
        local_1a0 = 0;
        if ((local_190 < 6) && (puVar10 = puVar3 + 0x10, puVar10 < local_1a4 + -4)) {
          do {
            *pcVar11 = '>';
            uVar9 = SfErrorHandler_DumpStack
                              (pcVar11 + 1,(uint)(pCVar1 + (-1 - (int)pcVar11)),puVar10,1,&local_198
                               ,(long *)0x0);
            if (local_198 == 0) {
              if ((0 < iVar16) && (local_1a0 < 0x10)) {
                *pcVar11 = ' ';
                local_1a0 = local_1a0 + 1;
                goto LAB_0041fecd;
              }
            }
            else {
LAB_0041fecd:
              pcVar11 = pcVar11 + uVar9 + 1;
              iVar16 = iVar16 + -1;
            }
            if ((local_198 & 1) != 0) break;
            if ((local_198 & 2) != 0) {
              local_190 = local_190 + 1;
              if (5 < local_190) break;
              iVar16 = 4;
            }
            if (pCVar1 < pcVar11 + 0x32) {
              return;
            }
            puVar10 = puVar10 + 1;
          } while (puVar10 < local_1a4 + -4);
        }
        if ((local_1a4 != (ulong *)0x0) && (puVar3 + local_194 < local_1a4)) {
          iVar16 = wsprintfA(pcVar11,"- - -\r\n");
          SfErrorHandler_DumpStack
                    (pcVar11 + iVar16,(int)pCVar1 - (int)(pcVar11 + iVar16),local_1a4 + -4,4,
                     (ulong *)0x0,(long *)0x0);
        }
      }
    }
  }
  return;
}


