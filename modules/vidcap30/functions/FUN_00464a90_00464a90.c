/* Module: vidcap30.exe
   Function: FUN_00464a90
   Address: 00464a90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int __fastcall FUN_00464a90(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined **ppuVar3;
  int iVar4;
  undefined *local_838;
  undefined *puStack_834;
  undefined *puStack_830;
  WCHAR aWStack_82c [259];
  undefined2 uStack_626;
  WCHAR aWStack_624 [259];
  undefined2 uStack_41e;
  WCHAR aWStack_41c [259];
  undefined2 uStack_216;
  WCHAR aWStack_214 [259];
  undefined2 uStack_e;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  iVar2 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    local_838 = (undefined *)0x0;
    iVar2 = (**(code **)*puVar1)(puVar1,&DAT_0058c718);
    if (-1 < iVar2) {
      iVar4 = 0;
      if (0 < DAT_005b6568) {
        ppuVar3 = &PTR_s_Video_Capture_005b646c;
        do {
          MultiByteToWideChar(0,1,ppuVar3[-1],-1,aWStack_214,0x104);
          uStack_e = 0;
          MultiByteToWideChar(0,1,*ppuVar3,-1,aWStack_624,0x104);
          uStack_41e = 0;
          MultiByteToWideChar(0,1,ppuVar3[5],-1,aWStack_41c,0x104);
          uStack_216 = 0;
          MultiByteToWideChar(0,1,ppuVar3[6],-1,aWStack_82c,0x104);
          local_838 = ppuVar3[9];
          puStack_834 = ppuVar3[10];
          puStack_830 = ppuVar3[0xb];
          uStack_626 = 0;
          iVar2 = (**(code **)(local_838 + 0x18))
                            (&local_838,aWStack_214,aWStack_624,aWStack_41c,aWStack_82c,ppuVar3[1],0
                             ,4,&stack0xfffff7c4,ppuVar3[0x1d]);
          if (iVar2 < 0) break;
          iVar4 = iVar4 + 1;
          ppuVar3 = ppuVar3 + 0x20;
        } while (iVar4 < DAT_005b6568);
      }
      (**(code **)(local_838 + 8))(&local_838);
      return iVar2;
    }
  }
  return iVar2;
}


