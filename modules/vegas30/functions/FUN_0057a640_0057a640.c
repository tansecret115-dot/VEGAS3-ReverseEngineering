/* Module: vegas30.exe
   Function: FUN_0057a640
   Address: 0057a640
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int __fastcall FUN_0057a640(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined **ppuVar3;
  int iVar4;
  int local_830;
  WCHAR aWStack_82c [259];
  undefined2 uStack_626;
  WCHAR aWStack_624 [259];
  undefined2 uStack_41e;
  WCHAR aWStack_41c [259];
  undefined2 uStack_216;
  WCHAR aWStack_214 [259];
  undefined2 uStack_e;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  iVar2 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    local_830 = 0;
    iVar2 = (**(code **)*puVar1)(puVar1,&DAT_0061be98);
    if (-1 < iVar2) {
      iVar4 = 0;
      if (0 < DAT_0063dd5c) {
        ppuVar3 = &PTR_s_Vegas_Video_0063dcf4;
        do {
          MultiByteToWideChar(0,1,ppuVar3[-1],-1,aWStack_214,0x104);
          uStack_e = 0;
          MultiByteToWideChar(0,1,*ppuVar3,-1,aWStack_624,0x104);
          uStack_41e = 0;
          MultiByteToWideChar(0,1,ppuVar3[4],-1,aWStack_82c,0x104);
          uStack_626 = 0;
          MultiByteToWideChar(0,1,ppuVar3[5],-1,aWStack_41c,0x104);
          uStack_216 = 0;
          local_830 = 0x1b7c;
          iVar2 = (*pcRam00001b94)(&local_830,aWStack_214,aWStack_624,aWStack_82c,aWStack_41c,
                                   CONCAT11(*(undefined1 *)(ppuVar3 + 2),
                                            *(undefined1 *)(ppuVar3 + 1)),0,1,&local_830,
                                   ppuVar3[0x18]);
          if (iVar2 < 0) break;
          iVar4 = iVar4 + 1;
          ppuVar3 = ppuVar3 + 0x1b;
        } while (iVar4 < DAT_0063dd5c);
      }
      (**(code **)(local_830 + 8))(&local_830);
      return iVar2;
    }
  }
  return iVar2;
}


