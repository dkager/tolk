namespace;

interface

uses
  System,
  DavyKager;

type
  ConsoleApp = public class
  public
    class method Main;
  end;

implementation

class method ConsoleApp.Main;
begin
  Console.WriteLine('Tolk -- C# Console App Example');
  Console.WriteLine('Initializing Tolk...');
  Tolk.Load();
  Console.WriteLine('Querying for the active screen reader driver...');
  var name: String := Tolk.DetectScreenReader();
  if assigned(name) then begin
    Console.WriteLine('The active screen reader driver is: {0}', name);
  end
  else begin
    Console.WriteLine('None of the supported screen readers is running');
  end;
  if Tolk.HasSpeech() then begin
    Console.WriteLine('This screen reader driver supports speech');
  end;
  if Tolk.HasBraille() then begin
    Console.WriteLine('This screen reader driver supports braille');
  end;
  Console.WriteLine('Let''s output some text...');
  if not Tolk.Output('Hello, World!') then begin
    Console.WriteLine('Failed to output text');
  end;
  Console.WriteLine('Finalizing Tolk...');
  Tolk.Unload();
  Console.WriteLine('Done!');
end;

end.
