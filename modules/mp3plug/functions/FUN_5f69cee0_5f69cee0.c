/* Module: mp3plug.dll
   Function: FUN_5f69cee0
   Address: 5f69cee0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int __fastcall FUN_5f69cee0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined **ppuVar3;
  int iVar4;
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
    iVar2 = (**(code **)*puVar1)(puVar1,&DAT_5f72d3d8);
    if (-1 < iVar2) {
      iVar4 = 0;
      if (0 < DAT_5f73cc94) {
        ppuVar3 = &PTR_s_MP3_Plug_In_5f73cc54;
        do {
          MultiByteToWideChar(0,1,ppuVar3[-1],-1,aWStack_214,0x104);
          uStack_e = 0;
          MultiByteToWideChar(0,1,*ppuVar3,-1,(LPWSTR)local_624,0x104);
          uStack_41e = 0;
          MultiByteToWideChar(0,1,ppuVar3[2],-1,aWStack_41c,0x104);
          uStack_216 = 0;
          iVar2 = (**(code **)(local_624[0] + 0x18))
                            (local_624,aWStack_214,local_624,&DAT_5f73055c,aWStack_41c,ppuVar3[1],0,
                             1,&stack0xfffff9d8,0);
          if (iVar2 < 0) break;
          iVar4 = iVar4 + 1;
          ppuVar3 = ppuVar3 + 0x11;
        } while (iVar4 < DAT_5f73cc94);
      }
      (**(code **)(local_624[0] + 8))(local_624);
      return iVar2;
    }
  }
  return iVar2;
}


