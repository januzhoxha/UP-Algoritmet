# Implementimi i klasës MenaxheriDetyrave

Në këtë directory gjendet implementimi i plotë i klasës **MenaxheriDetyrave**, e cila menaxhon një listë të detyrave duke përdorur një listë të lidhur (`std::list<string>`).

Më poshtë është metodologjia ime hap pas hapi gjatë zgjidhjes së detyrës:

```
1. Analizimi i kërkesës së detyrës
   - Duhej të krijohej një klasë që ruan një listë detyrash (strings)
   - Të implementohen funksione për shtim, fshirje sipas një fjale kyçe dhe afishim

2. Zgjedhja e strukturës së të dhënave
   - Vendosa të përdor STL: list<string>
   - Arsyeja: listë e lidhur → fshirje efikase pa zhvendosje elementesh

3. Krijimi i klasës MenaxheriDetyrave
   - Deklarova list<string> detyrat si private
   - Encapsulation: përdoruesi ndërvepron vetëm përmes metodave

4. Implementimi i metodës shtoDetyre
   - Përdora push_back() për të shtuar elemente në fund të listës
   - Kjo përmbush direkt kërkesën e detyrës

5. Implementimi i metodës hiqDetyre
   - Iterova me iterator (jo for klasik)
   - Kontrollova nëse detyra përmban fjalën kyçe me find()
   - Nëse po → erase(it), duke ruajtur iteratorin korrekt
   - Kujdes i veçantë për të shmangur invalidimin e iteratorëve

6. Implementimi i metodës shfaqDetyrat
   - Përdora range-based for loop për printim të thjeshtë dhe të pastër

7. Menaxhimi i input-it në main()
   - Lexova numrin e detyrave (cin >> n)
   - Përdora cin.ignore() për të shmangur problemet me getline
   - Lexova çdo detyrë me getline dhe e shtova në listë

8. Fshirja sipas fjalës kyçe
   - Lexova fjalenKyce me getline
   - Thirra metodën hiqDetyre

9. Afishimi final
   - Thirra shfaqDetyrat për të printuar listën e përditësuar
```