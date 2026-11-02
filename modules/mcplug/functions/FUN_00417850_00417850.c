/* Module: mcplug.dll
   Function: FUN_00417850
   Address: 00417850
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int __fastcall FUN_00417850(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined **ppuVar4;
  int local_624 [129];
  undefined2 uStack_41e;
  WCHAR aWStack_41c [259];
  undefined2 uStack_216;
  WCHAR aWStack_214 [259];
  undefined2 uStack_e;
  
  puVar1 = *(undefined4 **)(param_1 + 0xc);
  iVar2 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    local_624[0] = 0;
    iVar2 = (**(code **)*puVar1)(puVar1,&DAT_00477240);
    if (-1 < iVar2) {
      iVar3 = DAT_00486770 + -1;
      if (iVar3 < DAT_00486770) {
        ppuVar4 = &PTR_s_MainConcept_MPEG_1_2_Plug_In_004866e8 + iVar3 * 0x12;
        do {
          MultiByteToWideChar(0,1,ppuVar4[-2],-1,aWStack_214,0x104);
          uStack_e = 0;
          MultiByteToWideChar(0,1,*ppuVar4,-1,(LPWSTR)local_624,0x104);
          uStack_41e = 0;
          MultiByteToWideChar(0,1,ppuVar4[2],-1,aWStack_41c,0x104);
          uStack_216 = 0;
          iVar2 = (**(code **)(local_624[0] + 0x18))
                            (local_624,aWStack_214,local_624,&DAT_0047a3d8,aWStack_41c,ppuVar4[1],0,
                             1,&stack0xfffff9d8,0);
          if (iVar2 < 0) break;
          iVar3 = iVar3 + 1;
          ppuVar4 = ppuVar4 + 0x12;
        } while (iVar3 < DAT_00486770);
      }
      (**(code **)(local_624[0] + 8))(local_624);
      return iVar2;
    }
  }
  return iVar2;
}


