/* Module: mp3plug.dll
   Function: FUN_5f686360
   Address: 5f686360
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f686360(HWND param_1)

{
  HMENU hMenu;
  
  hMenu = GetSystemMenu(param_1,0);
  if (hMenu != (HMENU)0x0) {
    AppendMenuA(hMenu,0x800,0,(LPCSTR)0x0);
    AppendMenuA(hMenu,0,0xefff,"About MP3...");
  }
  return;
}


