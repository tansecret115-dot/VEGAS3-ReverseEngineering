/* Module: vidcap30.exe
   Function: _SfErrorHandler_DumpExceptionRecord@20
   Address: 0047e480
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfErrorHandler_DumpExceptionRecord_20
               (LPSTR param_1,int param_2,undefined1 *param_3,int *param_4,uint param_5)

{
  LPSTR pCVar1;
  ulong *puVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  SIZE_T SVar6;
  DWORD DVar7;
  undefined4 uVar8;
  uint uVar9;
  ulong *puVar10;
  char *pcVar11;
  int iVar12;
  undefined4 *puVar13;
  code *pcVar14;
  int iVar15;
  CHAR *pCVar16;
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
  
                    /* 0x7e480  370  _SfErrorHandler_DumpExceptionRecord@20 */
  iVar15 = param_4[1];
  param_4 = (int *)*param_4;
  iVar5 = *param_4;
  pCVar1 = param_1 + param_2;
  if (param_5 == 0) {
    param_5 = 0xff;
  }
  if ((param_5 & 1) != 0) {
    pcVar11 = "Unknown Type";
    iVar12 = 0;
    piVar3 = &DAT_005944b0;
    do {
      if (*piVar3 == iVar5) {
        pcVar11 = *(char **)(&UNK_005944b4 + iVar12 * 8);
        break;
      }
      piVar3 = piVar3 + 2;
      iVar12 = iVar12 + 1;
    } while (piVar3 < "control+c exit");
    local_154 = DAT_00586c70;
    puVar13 = &local_153;
    for (iVar12 = 9; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar13 = 0;
      puVar13 = puVar13 + 1;
    }
    *(undefined2 *)puVar13 = 0;
    *(undefined1 *)((int)puVar13 + 2) = 0;
    if (param_4[4] == 2) {
      pcVar4 = "WRITE";
      if (param_4[5] == 0) {
        pcVar4 = "READ";
      }
      wsprintfA(&local_154," %s:0x%X",pcVar4,param_4[6]);
    }
    iVar5 = wsprintfA(param_1,"Exception 0x%X (%s)%s IP:0x%X\r\n",iVar5,pcVar11,&local_154,
                      param_4[3]);
    param_1 = param_1 + iVar5;
    if (pCVar1 < param_1 + 0x32) {
      return;
    }
  }
  pcVar14 = wsprintfA_exref;
  if ((((param_5 & 2) != 0) &&
      (SVar6 = VirtualQuery((LPCVOID)param_4[3],&local_170,0x1c), pcVar14 = wsprintfA_exref,
      SVar6 == 0x1c)) &&
     (DVar7 = GetModuleFileNameA(local_170.AllocationBase,local_104,0x104),
     pcVar14 = wsprintfA_exref, DVar7 != 0)) {
    iVar5 = param_4[3] - (int)local_170.AllocationBase;
    uVar8 = _SfGetFileNamePtrA_4(local_104);
    pcVar14 = wsprintfA_exref;
    iVar5 = wsprintfA(param_1,"In Module \'%s\' at Address 0x%X + 0x%X\r\n",uVar8,
                      local_170.AllocationBase,iVar5);
    param_1 = param_1 + iVar5;
    if (pCVar1 < param_1 + 0x32) {
      return;
    }
  }
  local_1a4 = (ulong *)0x0;
  if ((param_5 & 0x20) != 0) {
    local_12c = DAT_00586c70;
    puVar13 = &local_12b;
    for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar13 = 0;
      puVar13 = puVar13 + 1;
    }
    *(undefined2 *)puVar13 = 0;
    *(undefined1 *)((int)puVar13 + 2) = 0;
    SVar6 = VirtualQuery(*(LPCVOID *)(iVar15 + 0xc4),&local_18c,0x1c);
    if (SVar6 != 0) {
      wsprintfA(&local_12c,"0x%X-0x%X",local_18c.BaseAddress,
                local_18c.RegionSize + (int)local_18c.BaseAddress);
      local_1a4 = (ulong *)(local_18c.RegionSize + (int)local_18c.BaseAddress);
    }
    if (param_3 == (undefined1 *)0x0) {
      param_3 = &DAT_00586c70;
    }
    pCVar16 = &local_12c;
    DVar7 = GetCurrentThreadId();
    iVar5 = wsprintfA(param_1,"Thread: %s ID=0x%X Stack=%s\r\n",param_3,DVar7,pCVar16);
    param_1 = param_1 + iVar5;
    pcVar14 = wsprintfA_exref;
    if (pCVar1 < param_1 + 0x32) {
      return;
    }
  }
  if ((param_5 & 4) != 0) {
    iVar5 = (*pcVar14)(param_1,"Registers:\r\n");
    param_1 = param_1 + iVar5;
    if (pCVar1 < param_1 + 0x32) {
      return;
    }
    iVar5 = (*pcVar14)(param_1," EAX=%08x CS=%04x EIP=%08x EFLGS=%08x\r\n",
                       *(undefined4 *)(iVar15 + 0xb0),*(undefined4 *)(iVar15 + 0xbc),
                       *(undefined4 *)(iVar15 + 0xb8),*(undefined4 *)(iVar15 + 0xc0));
    param_1 = param_1 + iVar5;
    if (pCVar1 < param_1 + 0x32) {
      return;
    }
    iVar5 = (*pcVar14)(param_1," EBX=%08x SS=%04x ESP=%08x EBP=%08x\r\n",
                       *(undefined4 *)(iVar15 + 0xa4),*(undefined4 *)(iVar15 + 200),
                       *(undefined4 *)(iVar15 + 0xc4),*(undefined4 *)(iVar15 + 0xb4));
    param_1 = param_1 + iVar5;
    if (pCVar1 < param_1 + 0x32) {
      return;
    }
    iVar5 = (*pcVar14)(param_1," ECX=%08x DS=%04x ESI=%08x FS=%04x\r\n",
                       *(undefined4 *)(iVar15 + 0xac),*(undefined4 *)(iVar15 + 0x98),
                       *(undefined4 *)(iVar15 + 0xa0),*(undefined4 *)(iVar15 + 0x90));
    param_1 = param_1 + iVar5;
    if (pCVar1 < param_1 + 0x32) {
      return;
    }
    iVar5 = (*pcVar14)(param_1," EDX=%08x ES=%04x EDI=%08x GS=%04x\r\n",
                       *(undefined4 *)(iVar15 + 0xa8),*(undefined4 *)(iVar15 + 0x94),
                       *(undefined4 *)(iVar15 + 0x9c),*(undefined4 *)(iVar15 + 0x8c));
    param_1 = param_1 + iVar5;
    if (pCVar1 < param_1 + 0x32) {
      return;
    }
  }
  if ((param_5 & 8) != 0) {
    iVar5 = (*pcVar14)(param_1,"Bytes at CS:EIP:\r\n");
    pcVar11 = param_1 + iVar5;
    if (pCVar1 < pcVar11 + 0x32) {
      return;
    }
    uVar9 = SfErrorHandler_DumpHex
                      (pcVar11,(int)pCVar1 - (int)pcVar11,*(void **)(iVar15 + 0xb8),0x10);
    param_1 = pcVar11 + uVar9;
    if (pCVar1 < param_1 + 0x32) {
      return;
    }
  }
  if ((param_5 & 0x10) != 0) {
    iVar5 = (*pcVar14)(param_1,"Stack Dump:\r\n");
    pcVar11 = param_1 + iVar5;
    if (pcVar11 + 0x32 <= pCVar1) {
      puVar2 = *(ulong **)(iVar15 + 0xc4);
      iVar15 = 0;
      local_198 = 0;
      local_190 = 0;
      local_194 = 0x10;
      if (local_1a4 <= puVar2 + 0x14) {
        if ((int)((int)local_1a4 - (int)puVar2 & 0xfffffffcU) < 0x40) {
          local_194 = 0x10;
        }
        else {
          local_194 = (int)local_1a4 - (int)puVar2 >> 2;
        }
      }
      uVar9 = SfErrorHandler_DumpStack
                        (pcVar11,(int)pCVar1 - (int)pcVar11,puVar2,local_194,&local_198,&local_190);
      pcVar11 = pcVar11 + uVar9;
      if (pcVar11 + 0x32 <= pCVar1) {
        local_1a0 = 0;
        if ((local_190 < 6) && (puVar10 = puVar2 + 0x10, puVar10 < local_1a4 + -4)) {
          do {
            *pcVar11 = '>';
            uVar9 = SfErrorHandler_DumpStack
                              (pcVar11 + 1,(uint)(pCVar1 + (-1 - (int)pcVar11)),puVar10,1,&local_198
                               ,(long *)0x0);
            if (local_198 == 0) {
              if ((0 < iVar15) && (local_1a0 < 0x10)) {
                *pcVar11 = ' ';
                local_1a0 = local_1a0 + 1;
                goto LAB_0047e8ed;
              }
            }
            else {
LAB_0047e8ed:
              pcVar11 = pcVar11 + uVar9 + 1;
              iVar15 = iVar15 + -1;
            }
            if ((local_198 & 1) != 0) break;
            if ((local_198 & 2) != 0) {
              local_190 = local_190 + 1;
              if (5 < local_190) break;
              iVar15 = 4;
            }
            if (pCVar1 < pcVar11 + 0x32) {
              return;
            }
            puVar10 = puVar10 + 1;
          } while (puVar10 < local_1a4 + -4);
        }
        if ((local_1a4 != (ulong *)0x0) && (puVar2 + local_194 < local_1a4)) {
          iVar15 = wsprintfA(pcVar11,"- - -\r\n");
          SfErrorHandler_DumpStack
                    (pcVar11 + iVar15,(int)pCVar1 - (int)(pcVar11 + iVar15),local_1a4 + -4,4,
                     (ulong *)0x0,(long *)0x0);
        }
      }
    }
  }
  return;
}


